<?php


/**
 * Alter the query before executing the query.
 *
 * This hook should be placed in MODULENAME.views.inc and it will be
 * auto-loaded. MODULENAME.views.inc must be in the directory specified by the
 * 'path' key returned by MODULENAME_views_api(), or the same directory as the
 * .module file, if 'path' is unspecified.
 *
 * @param $view
 *   The view object about to be processed.
 * @param $query
 *   An object describing the query.
 * @see hook_views_query_substitutions()
 */
function cu_class_views_views_query_alter(&$view, &$query) {
  if ($view->name == 'cu_classes') {
    foreach ($query->where[2]['conditions'] as $key => $value) {
      // If no subject value selected, continue.
      if ($value['field'] == 'field_data_field_class_subject.field_class_subject_value') {
        $subjects = db_select('cu_courses_subjects', 'subjects');
        $subjects->fields('subjects', array('code', 'value', 'readable_value', 'parent_org', 'status'));
        $subjects->orderBy('subjects.value', 'ASC');
        $subjects->condition('subjects.status', 1, '=');
        $subjects->condition('subjects.readable_value', $value['value'], '=');
        $results = $subjects->execute()->fetchAllAssoc('code');
        $query->where[2]['conditions'][$key]['value'] = implode('|', array_keys($results));
      }
    }
  }
}

/*
function _cu_class_views_subject_search(&$conditions, $field = NULL, &$subject, &$array = array()) {

  foreach ($conditions as $key => $value) {
    if (in_array($field, $value)) {
      dpm('got it right here');
      dpm($conditions[$key]);
      $subject = array(
        'code' => TRUE,
        'value' => $value['value'],
      );
      $conditions[$key]['value'] = 'poop';
    }
    _cu_class_views_subject_search($value, $field, $subject, $array);
  }
}
    _cu_class_views_subject_search($query->where, 'field_data_field_class_subject.field_class_subject_value', $subject, &$query->where);

    array_walk_recursive($query->where,
      function ($value, $key) use(&$subject_present, &$conditions) {
        if ($subject_present) {
          $subject_code = $value;
        }

        if ('field_data_field_class_subject.field_class_subject_value' == $value) {
          $subject_present = TRUE;
        }
      });
*/
