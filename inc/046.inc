    <div class="tip">
	The three variables PROMPT1, PROMPT2, and PROMPT3 contain strings and
	special escape sequences that describe the appearance of the prompt. Prompt
	1 is the normal prompt that is issued when psql requests a new command.
	  Prompt 2 is issued when more input is expected during command entry, for
	  example because the command was not terminated with a semicolon or a quote
	  was not closed. Prompt 3 is issued when you are running an SQL COPY FROM
	  STDIN command and you need to type in a row value on the terminal.
      <pre><code class="hljs bash">laetitia=# \set PROMPT1 'What can I do for you? '
What can I do for you? \set PROMPT2 'I\'m waiting... '
What can I do for you? select *
I'm waiting... from test;
 id | value 
----+-------
  1 | test
(1 row)

What can I do for you? \set PROMPT3 'Please enter your value: ' 
What can I do for you? copy test (value) from stdin;
Enter data to be copied followed by a newline.
End with a backslash and a period on a line by itself, or an EOF signal.
Please enter your value: blabla
Please enter your value: \.
COPY 1</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
