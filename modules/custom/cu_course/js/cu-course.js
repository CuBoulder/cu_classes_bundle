(function( $ ){
  $(document).ready(function(){
    $("#other-classes-trigger").toggle(function(){
      var t = $(this).attr("href");
      $(t).slideToggle("fast");
      $("i.fa", this).removeClass("fa-plus-square");
      $("i.fa", this).addClass("fa-minus-square");
      $(this).addClass("expand-active");
      $(this).attr('aria-expanded', 'true');
      return false;
    }, function() {
      var t = $(this).attr("href");
      $(t).slideToggle("fast");
      $("i.fa", this).removeClass("fa-minus-square");
      $("i.fa", this).addClass("fa-plus-square");
      $(this).removeClass("expand-active");
      $(this).attr('aria-expanded', 'false');
      return false;
    });
  });
})( jQuery );
