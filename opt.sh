opt -S -stats -o /tmp/test.ll \
  --early-cse \
  --functionattrs \
  --globalopt \
  --globals-aa \
  --instcombine \
  --mem2reg \
  --reassociate \
  --simplifycfg \
  --sroa \
  test.ll 

