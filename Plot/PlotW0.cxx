
{
 
 TCanvas *cc = new TCanvas("cc","",180,52,550,550);
 
 int n = 16;
 
 Double_t x[100] = {1.0,     2.0,     3.0,     3.5,     4.0,     4.5,     5.5,     6.0,     6.5,     7.0,     7.5,     8.0,     8.5,     9.0,     9.5,     10.0};
 Double_t y[100] = {1.0,     2.0,     3.0,     3.5,     4.0,     4.5,     5.5,     6.0,     6.5,     7.0,     7.5,     8.0,     8.5,     9.0,     9.5,     10.0};
 
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
 gr->GetYaxis()->SetTitle("Position resolution");
 gr->GetYaxis()->SetRangeUser(0,10);
 gPad->SetGrid();
 
 tex->Draw("same");
 tex2->Draw("same");
 
 
}