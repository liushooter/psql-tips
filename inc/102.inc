    <div class="tip">
      <code>\copy</code> will allow you to copy data from something into a table (something
		might be the result of a command, a program, stdin...)
		<pre><code class="hljs bash">laetitia=# \copy test(value) from stdin
Enter data to be copied followed by a newline.
End with a backslash and a period on a line by itself, or an EOF signal.
>> value1
>> value2
>> \.
COPY 2
laetitia=# select * from test;
 id | value  
----+--------
  1 | test
  5 | blabla
  6 | value1
  7 | value2
(4 rows)</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
