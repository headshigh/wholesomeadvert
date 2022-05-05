document.querySelector('.submit-email').addEventListener('mousedown', (e) => {
  e.preventDefault();
  document.querySelector('.subscription').classList.add('done');
});
const menu = document.querySelector('.menu');
const nav = document.querySelector('.nav');
menu.addEventListener('click', function () {
  nav.classList.toggle('active');
});
