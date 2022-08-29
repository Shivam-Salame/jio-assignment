const URL = "https://api.imgflip.com/get_memes";

fetch(URL)
  .then((res) => {
    return res.json();
  })
  .then((data) => {

      // fetching memes from api to memes object
    let memes = data.data.memes;

    // starting index of memes array
    let min = 0;
    // last index of memes array
    let max = memes.length - 1;

    // targeting the ul in html
    let list = document.getElementById("memes");

    // looped memes array to get 10 memes
    for (let i = 0; i < 10; i++) {
      // random int value between min and max
      let rand = getRandomIntInclusive(min, max);

      // creating and appending child inside ul tag in HTML
      let li = document.createElement("li");
      li.innerText = memes[rand].name;
      list.appendChild(li);
    }
  })
  .catch((err) => {
    console.log(`Error fetching: ${err}`);
  });

  // function to get random int value between min and max size of memes array
function getRandomIntInclusive(min, max) {
  min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min + 1) + min); 
}
