
{
 
 TCanvas *cc = new TCanvas("cc","",180,52,550,550);
 
 int n = 11;
 
 //----              1        2        3        4        5         6        7        8        9       10        11
 Double_t x[100] = { 2.9,     3.1,     3.2,     3.3,     3.35,    3.4,     3.5,     3.6,     3.8,     4.0,     4.4,   };
 Double_t y[100] = { 14.293,  9.85068, 8.98689, 8.66378, 8.60585, 8.66100, 8.93844, 9.4029,  10.5937, 11.4263, 11.8821};
 
//---- possible scale factors
 for (int i=0; i<n; i++) {
  y[i] = y[i]/10.; 
 }
 
 TGraph* gr = new TGraph(n, x, y);
  
 cc->SetTicks();
 cc->SetFillColor(0);
 cc->SetBorderMode(0);
 cc->SetBorderSize(2);
 cc->SetTickx(1);
 cc->SetTicky(1);
 cc->SetRightMargin(0.05);
 cc->SetBottomMargin(0.12);
 cc->SetFrameBorderMode(0);
 TLatex * tex = new TLatex(0.94,0.92,"H4 Test Beam");
 tex->SetNDC();
 tex->SetTextAlign(31);
 tex->SetTextFont(42);
 tex->SetTextSize(0.04);
 tex->SetLineWidth(2);
 TLatex * tex2 = new TLatex(0.14,0.92,"CMS Preliminary");
 tex2->SetNDC();
 tex2->SetTextFont(61);
 tex2->SetTextSize(0.04);
 tex2->SetLineWidth(2);
 
 gr->SetTitle("");
 gr->SetMarkerStyle(21);
 gr->SetMarkerColor(kRed);
 gr->SetLineColor(kRed);
 gr->Draw("apl");
 gr->GetXaxis()->SetTitle("w_{0}");
 gr->GetYaxis()->SetTitle("Position resolution [mm]");
 gr->GetYaxis()->SetRangeUser(0.8,1.7);
 gPad->SetGrid();
 
 tex->Draw("same");
 tex2->Draw("same");
 
 
 
 TCanvas *cclog = new TCanvas("cclog","",180,52,550,550);
 
 
 //---- possible scale factors
 for (int i=0; i<n; i++) {
  x[i] = exp(-x[i]) * 100.; 
 }
 
 
 TGraph* grlog = new TGraph(n, x, y);
 
 cc->SetTicks();
 cclog->SetFillColor(0);
 cclog->SetBorderMode(0);
 cclog->SetBorderSize(2);
 cclog->SetTickx(1);
 cclog->SetTicky(1);
 cclog->SetRightMargin(0.05);
 cclog->SetBottomMargin(0.12);
 cclog->SetFrameBorderMode(0);

 grlog->SetTitle("");
 grlog->SetMarkerStyle(21);
 grlog->SetMarkerColor(kRed);
 grlog->SetLineColor(kRed);
 grlog->Draw("apl");
 grlog->GetXaxis()->SetTitle("minimum relative energy [%]");
 grlog->GetYaxis()->SetTitle("Position resolution [mm]");
 grlog->GetYaxis()->SetRangeUser(0.8,1.7);
 gPad->SetGrid();
 
 tex->Draw("same");
 tex2->Draw("same");
 
 
}