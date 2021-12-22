    <div class="tip">
      The default delimiter for text entry in stdin (either using the <code>\copy</code>
		meta-command or the <code>copy</code> SQL command) is a tab character.
		<pre><code class="hljs bash">laetitia=> create table data(d1 integer, d2 date);
CREATE TABLE
laetitia=> \copy data from stdin
Enter data to be copied followed by a newline.
End with a backslash and a period on a line by itself, or an EOF signal.
>> 1    '2021-04-12'
>> 2 '2021-04-13'
>> \. 
ERROR:  invalid input syntax for type integer: "2 '2021-04-13'"
CONTEXT:  COPY data, line 2, column d1: "2 '2021-04-13'"</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
