    <div class="tip">
	  <code>\copy ... to ...</code> will allow you to copy data to a file on the client
	  host.
      <pre><code class="hljs bash">laetitia=# \copy (select * from test) to mydata.dmp
COPY 2
laetitia=# \! cat mydata.dmp
1       test
5       blabla</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
