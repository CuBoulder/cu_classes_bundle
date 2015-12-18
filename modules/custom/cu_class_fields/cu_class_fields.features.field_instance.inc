<?php
/**
 * @file
 * cu_class_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cu_class_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'cu_class-class-field_class_catalog_nbr'.
  $field_instances['cu_class-class-field_class_catalog_nbr'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_catalog_nbr',
    'label' => 'CATALOG_NBR',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_class_nbr'.
  $field_instances['cu_class-class-field_class_class_nbr'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_class_nbr',
    'label' => 'CLASS_NBR',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_class_section'.
  $field_instances['cu_class-class-field_class_class_section'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_class_section',
    'label' => 'CLASS_SECTION',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_course_title_long'.
  $field_instances['cu_class-class-field_class_course_title_long'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_course_title_long',
    'label' => 'COURSE_TITLE_LONG',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_crse_attr'.
  $field_instances['cu_class-class-field_class_crse_attr'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_crse_attr',
    'label' => 'CRSE_ATTR',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_crse_attr_value'.
  $field_instances['cu_class-class-field_class_crse_attr_value'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_crse_attr_value',
    'label' => 'CRSE_ATTR_VALUE',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_crse_id'.
  $field_instances['cu_class-class-field_class_crse_id'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_crse_id',
    'label' => 'CRSE_ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_end_dt'.
  $field_instances['cu_class-class-field_class_end_dt'] = array(
    'bundle' => 'class',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_end_dt',
    'label' => 'END_DT',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_enrl_cap'.
  $field_instances['cu_class-class-field_class_enrl_cap'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_enrl_cap',
    'label' => 'ENRL_CAP',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_enrl_stat'.
  $field_instances['cu_class-class-field_class_enrl_stat'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_enrl_stat',
    'label' => 'ENRL_STAT',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_enrl_tot'.
  $field_instances['cu_class-class-field_class_enrl_tot'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_enrl_tot',
    'label' => 'ENRL_TOT',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_institution'.
  $field_instances['cu_class-class-field_class_institution'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_institution',
    'label' => 'INSTITUTION',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_last_updated'.
  $field_instances['cu_class-class-field_class_last_updated'] = array(
    'bundle' => 'class',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_last_updated',
    'label' => 'Last Updated',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_meeting_time_end'.
  $field_instances['cu_class-class-field_class_meeting_time_end'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_meeting_time_end',
    'label' => 'MEETING_TIME_END',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_meeting_time_start'.
  $field_instances['cu_class-class-field_class_meeting_time_start'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_meeting_time_start',
    'label' => 'MEETING_TIME_START',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_scc_latitude'.
  $field_instances['cu_class-class-field_class_scc_latitude'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_scc_latitude',
    'label' => 'SCC_LATITUDE',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_scc_longitude'.
  $field_instances['cu_class-class-field_class_scc_longitude'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_scc_longitude',
    'label' => 'SCC_LONGITUDE',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_ssr_component'.
  $field_instances['cu_class-class-field_class_ssr_component'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_ssr_component',
    'label' => 'SSR_COMPONENT',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_ssr_instr_long'.
  $field_instances['cu_class-class-field_class_ssr_instr_long'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_ssr_instr_long',
    'label' => 'SSR_INSTR_LONG',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_ssr_mtg_sched_long'.
  $field_instances['cu_class-class-field_class_ssr_mtg_sched_long'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_ssr_mtg_sched_long',
    'label' => 'SSR_MTG_SCHED_LONG',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_start_dt'.
  $field_instances['cu_class-class-field_class_start_dt'] = array(
    'bundle' => 'class',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_start_dt',
    'label' => 'START_DT',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_strm'.
  $field_instances['cu_class-class-field_class_strm'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_strm',
    'label' => 'STRM',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_subject'.
  $field_instances['cu_class-class-field_class_subject'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_subject',
    'label' => 'SUBJECT',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'cu_class-class-field_class_wait_tot'.
  $field_instances['cu_class-class-field_class_wait_tot'] = array(
    'bundle' => 'class',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'cu_class',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_class_wait_tot',
    'label' => 'WAIT_TOT',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CATALOG_NBR');
  t('CLASS_NBR');
  t('CLASS_SECTION');
  t('COURSE_TITLE_LONG');
  t('CRSE_ATTR');
  t('CRSE_ATTR_VALUE');
  t('CRSE_ID');
  t('END_DT');
  t('ENRL_CAP');
  t('ENRL_STAT');
  t('ENRL_TOT');
  t('INSTITUTION');
  t('Last Updated');
  t('MEETING_TIME_END');
  t('MEETING_TIME_START');
  t('SCC_LATITUDE');
  t('SCC_LONGITUDE');
  t('SSR_COMPONENT');
  t('SSR_INSTR_LONG');
  t('SSR_MTG_SCHED_LONG');
  t('START_DT');
  t('STRM');
  t('SUBJECT');
  t('WAIT_TOT');

  return $field_instances;
}
