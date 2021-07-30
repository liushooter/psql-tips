    <div class="tip"> Use <code>\echo</code> to display text or evaluated argument to the
	standard output.<br/>
	You can get rid of the trailing new line by using <code>-n</code> as a first argument.
      <pre><code class="hljs bash">laetitia=# \echo test
test
laetitia=# \echo &#96;date&#96;
Fri Jul 30 10:13:41 CEST 2021
laetitia=# \echo -n &#96;date&#96;
Fri Jul 30 10:13:47 CEST 2021laetitia=#</code></pre>This feature is available
since iat least Postgres 7.1.
	</div>
