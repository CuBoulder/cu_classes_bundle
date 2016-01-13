<?php

// Create class title
$class_title = array();
$class_title[] = html_entity_decode($fields['field_class_course_title_long']->content) . ' - Section ' . $fields['field_class_class_section']->content;

if (isset($fields['field_class_instruction_mode']->content)) {
  $mode = $fields['field_class_instruction_mode']->content;
  //$class_title[] = '<span>' . cu_class_format_translate($mode) . '</span>';
}

// Link class title to course page
$class_title_link = l(join(' ', $class_title), 'course/' . $fields['field_class_crse_id']->content, array('html' => TRUE, 'query' => array('class_id' => $fields['field_class_class_nbr']->content)));

// Dates
$dates = array();
$dates[] = $fields['field_class_start_dt']->content;
$dates[] = $fields['field_class_end_dt']->content;

$updated = 'Updated: ' . $fields['field_class_last_updated']->content;

// Available seats
$cap = intval($fields['field_class_enrl_cap']->content);
$total = intval($fields['field_class_enrl_tot']->content);
$available = $cap - $total;
if ($available == 1) {
  $available_seats = $available . ' seat available';
} else {
  $available_seats = $available . ' seats available';
}
if ($fields['field_class_crse_attr']->content == 'BCRQ') {
  $reqs = $fields['field_class_crse_attr_value']->content;
  $course_requirements = cu_class_core_requirements($reqs);
}
$session = cu_class_session_translator($fields['field_class_session_code']->content);

$format = cu_class_format_translate($fields['field_class_instruction_mode']->content);
?>
<div class="class-view-mode-list class-entity-wrapper">
  <div class="class-wrapper">
    <div class="class-title-wrapper">
      <h2 class="class-title"><?php print $class_title_link; ?></h2>
      <h3 class="class-format"><span class="element-invisible">Class Format: </span><?php print $format; ?></h3>
    </div>

    <div class="class-content">
      <div class="row clearfix">
        <div class="class-meta col-lg-6 col-md-6 col-sm-6 col-xs-12">
          <div class="row clearfix">
            <div class="col-lg-6 col-md-6 col-sm-6 col-xs-12">
              <div class="class-section">
                <h3>Class No.</h3>
                <?php print $fields['field_class_class_nbr']->content; ?>
              </div>
            </div>
            <div class="col-lg-6 col-md-6 col-sm-6 col-xs-12">
              <div class="class-section">
                <h3>Core Requirements</h3>
                <?php print $course_requirements; ?>
              </div>
            </div>
          </div>
          <div class="row clearfix">
            <div class="col-lg-6 col-md-6 col-sm-6 col-xs-12">
              <div class="class-section">
                <h3>Credits</h3>
                <?php print $fields['field_class_units_acad_prog']->content; ?>
              </div>
            </div>
            <div class="col-lg-6 col-md-6 col-sm-6 col-xs-12">
              <div class="class-section">
                <h3>Instructor</h3>
                <?php print $fields['field_class_ssr_instr_long']->content; ?>
              </div>
            </div>
          </div>
        </div>
        <div class="class-date-instructor col-lg-3 col-md-3 col-sm-3 col-xs-12">
          <div class="class-section">
            <h3>Course Dates</h3>
            <?php print join(' - ', $dates); ?>
          </div>
          <div class="class-section">
            <h3>Session</h3>
            <?php print $session; ?>
          </div>
        </div>
        <div class="class-availability col-lg-3 col-md-3 col-sm-3 col-xs-12">
          <div class="class-section">
            <h3>Availability</h3>
            <?php print $available_seats; ?>
            <div class="updated">
              <?php print $updated; ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
