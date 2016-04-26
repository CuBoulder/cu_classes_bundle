<?php
/**
 * @file
 * cu_courses.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cu_courses_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'custom_course_list';
  $bean_type->label = 'Custom Course List';
  $bean_type->options = '';
  $bean_type->description = 'A list of courses that are selected manually.';
  $export['custom_course_list'] = $bean_type;

  return $export;
}
