jQuery(document).ready(function(){
  jQuery('.classes-view-some').each(function(){

  });
  jQuery('<a href="#" class="view-more-classes"><span class="button button-small button-blue"><i class="fa fa-plus" />&nbsp;View All Classes</span></a>').appendTo('.classes-view-some');

  jQuery('a.view-more-classes').click(function(){
    jQuery(this).closest('.classes-view-some').removeClass('classes-view-some-initial');
    var courseID = jQuery(this).closest('.express-course').attr('id');
    var courseSelector = '#' + courseID + ' .express-class';
    jQuery(courseSelector).fadeIn(500);
    jQuery(this).fadeOut(250);
    return false;
  });
});
