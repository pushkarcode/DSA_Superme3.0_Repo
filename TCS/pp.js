function genrateOPT(user) {
  //check if user nuber is > then 7
  if (user.phoneno.length < 7) {
    return "Invalid phone number";
  }
  const lastree = user.phoneno.slice(4, 7);
  console.log(lastree);

  //check or give first three random number
  const threerandom = Math.floor(100 + Math.random() * 900);
  console.log(threerandom);
  const otp = `${threerandom}${lastree}`;
  console.log(otp);
}
//baese on user how they think 


console.log(genrateOPT({ phoneno: "1234567890" }));
console.log(genrateOPT({ phoneno: "9131397722" }));
console.log(genrateOPT({ phoneno: "70001" }));
