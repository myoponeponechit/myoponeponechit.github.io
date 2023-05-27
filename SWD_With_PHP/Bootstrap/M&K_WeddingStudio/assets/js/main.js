//Menu
const icon = document.querySelector('.icon');
icon.addEventListener('click',Menu);

function Menu(){
    icon.classList.toggle('new_class');
    let ul = document.querySelector('.myul');
    ul.classList.toggle('newul');
}
// Categories of Images
/* Demo purposes only */
$(".hover").mouseleave(
    function() {
      $(this).removeClass("hover");
    }
  );