void  setup ()
{
  pinMode ( 13 , OUTPUT);
  Serial. começar ( 9600 );
}

void  loop ()
{
  char dado = Serial. read ();
  if (dado == ' a ' )
    digitalWrite ( 13 , ALTO);
  else  if (dado == ' b ' )
    digitalWrite ( 13 , LOW);
}
