<?php
/**
 * @file
 * cu_courses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_courses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cu_courses_node_info() {
  $items = array(
    'course_list_page' => array(
      'name' => t('Course List Page'),
      'base' => 'node_content',
      'description' => t('Display a list of Courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'custom_course_list_page' => array(
      'name' => t('Custom Course List Page'),
      'base' => 'node_content',
      'description' => t('A list of courses that are selected manually.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
