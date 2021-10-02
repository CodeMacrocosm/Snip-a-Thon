function pyramid(level){

  for(let i=2;i<=level; i+=2){

    let emptySpace = ' '.repeat(level - i);

    let charcterSpace = '#'.repeat(i * 4 - 2);

    

    console.log(emptyspace + characterSpace + emptySpace);

  }

}
