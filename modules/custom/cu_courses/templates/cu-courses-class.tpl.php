<?php
  $heading_tag1 = isset($heading_tag[1]) ? $heading_tag[1] : 'strong';
  $heading_tag2 = isset($heading_tag[2]) ? $heading_tag[2] : 'strong';
?>
<div class="express-class clearfix">
  <div class="row">
    <div class="col-lg-2 col-md-2 col-sm-2 col-xs-12 class-data">
      <<?php print $heading_tag1; ?> class="class-label">Section</<?php print $heading_tag1; ?>>
      <?php print $field_class_class_section_value; ?>
    </div>
    <div class="col-lg-3 col-md-3 col-sm-3 col-xs-12 class-data">
      <<?php print $heading_tag2; ?> class="class-label">Instructor</<?php print $heading_tag2; ?>>
      <?php print $field_class_ssr_instr_long_value; ?>
    </div>
    <div class="col-lg-3 col-md-3 col-sm-3 col-xs-12 class-data">
      <<?php print $heading_tag2; ?> class="class-label">Schedule</<?php print $heading_tag2; ?>>
      <?php print cu_courses_meeting_schedule($field_class_ssr_mtg_sched_long_value); ?>
      <?php
        if (cu_class_session_translator($field_class_session_code_value)) {
          print '<br />' . cu_class_session_translator($field_class_session_code_value);
        }
      ?>
    </div>
    <div class="col-lg-2 col-md-2 col-sm-2 col-xs-12 class-data">
      <<?php print $heading_tag2; ?> class="class-label">Building/Room</<?php print $heading_tag2; ?>>
      <?php print $field_class_ssr_mtg_loc_long_value; ?>
    </div>
    <div class="col-lg-2 col-md-2 col-sm-2 col-xs-12 class-data">
      <<?php print $heading_tag2; ?> class="class-label">Format</<?php print $heading_tag2; ?>>
      <?php print cu_class_format_translate($field_class_instruction_mode_value); ?>
    </div>
  </div>
  <?php if (isset($field_class_ssr_descrlong_value)): ?>
    <div class="row">
      <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
        <<?php print $heading_tag2; ?> class="element-invisible">Description</<?php print $heading_tag2; ?>>
        <?php print $field_class_ssr_descrlong_value; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
