<?php
/**
 * @file
 * cu_courses.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_courses_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_list_display|bean|custom_course_list|form';
  $field_group->group_name = 'group_course_list_display';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'custom_course_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display',
    'weight' => '6',
    'children' => array(
      0 => 'field_course_list_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Display',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-course-list-display field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_course_list_display|bean|custom_course_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_list_display|node|course_list_page|form';
  $field_group->group_name = 'group_course_list_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_list_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display',
    'weight' => '7',
    'children' => array(
      0 => 'field_course_list_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-course-list-display field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_course_list_display|node|course_list_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_list_display|node|custom_course_list_page|form';
  $field_group->group_name = 'group_course_list_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'custom_course_list_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display',
    'weight' => '7',
    'children' => array(
      0 => 'field_course_list_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Display',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-course-list-display field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_course_list_display|node|custom_course_list_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_list_exposed|node|course_list_page|form';
  $field_group->group_name = 'group_course_list_exposed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_list_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exposed Filters',
    'weight' => '6',
    'children' => array(
      0 => 'field_course_list_filters',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Exposed Filters',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-course-list-exposed field-group-fieldset',
        'description' => 'Exposed filters allow your visitors to search for courses.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_course_list_exposed|node|course_list_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_list_exposed|node|custom_course_list_page|form';
  $field_group->group_name = 'group_course_list_exposed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'custom_course_list_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exposed Filters',
    'weight' => '6',
    'children' => array(
      0 => 'field_course_list_filters',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Exposed Filters',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-course-list-exposed field-group-fieldset',
        'description' => 'Exposed filters allow your visitors to search for courses.
',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_course_list_exposed|node|custom_course_list_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_list_filters|node|course_list_page|form';
  $field_group->group_name = 'group_course_list_filters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_list_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filters',
    'weight' => '5',
    'children' => array(
      0 => 'field_course_list_term',
      1 => 'field_course_list_subject',
      2 => 'field_course_list_range',
      3 => 'field_course_list_format',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Filters',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-course-list-filters field-group-fieldset',
        'description' => 'Use filters to limit what courses show up on the page.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_course_list_filters|node|course_list_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Exposed Filters');
  t('Filters');

  return $field_groups;
}
