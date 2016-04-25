<?php
/**
 * @file
 * cu_class_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_class_fields_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_api_values|cu_class|class|form';
  $field_group->group_name = 'group_class_api_values';
  $field_group->entity_type = 'cu_class';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'API Values',
    'weight' => '5',
    'children' => array(
      0 => 'field_class_campus_des',
      1 => 'field_class_class_nbr',
      2 => 'field_class_crse_attr',
      3 => 'field_class_crse_attr_value',
      4 => 'field_class_crse_id',
      5 => 'field_class_institution',
      6 => 'field_class_session_code',
      7 => 'field_class_ssr_component',
      8 => 'field_class_strm',
      9 => 'field_class_units_acad_prog',
      10 => 'field_class_cancel_dt',
      11 => 'group_class_enrollment',
      12 => 'group_class_meeting',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-api-values field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_api_values|cu_class|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_enrollment|cu_class|class|form';
  $field_group->group_name = 'group_class_enrollment';
  $field_group->entity_type = 'cu_class';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class_api_values';
  $field_group->data = array(
    'label' => 'Enrollment',
    'weight' => '10',
    'children' => array(
      0 => 'field_class_enrl_cap',
      1 => 'field_class_enrl_stat',
      2 => 'field_class_enrl_tot',
      3 => 'field_class_wait_tot',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-enrollment field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_enrollment|cu_class|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_meeting|cu_class|class|form';
  $field_group->group_name = 'group_class_meeting';
  $field_group->entity_type = 'cu_class';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class_api_values';
  $field_group->data = array(
    'label' => 'Class Meeting',
    'weight' => '11',
    'children' => array(
      0 => 'field_class_end_dt',
      1 => 'field_class_instruction_mode',
      2 => 'field_class_instruction_mode_des',
      3 => 'field_class_meeting_time_end',
      4 => 'field_class_meeting_time_start',
      5 => 'field_class_scc_latitude',
      6 => 'field_class_scc_longitude',
      7 => 'field_class_ssr_instr_long',
      8 => 'field_class_ssr_mtg_loc_long',
      9 => 'field_class_ssr_mtg_sched_long',
      10 => 'field_class_start_dt',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-meeting field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_meeting|cu_class|class|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('API Values');
  t('Class Meeting');
  t('Enrollment');

  return $field_groups;
}
