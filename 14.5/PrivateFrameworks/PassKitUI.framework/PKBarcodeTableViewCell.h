//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PKBarcodeStickerView, PKPass;

@interface PKBarcodeTableViewCell : UITableViewCell
{
    PKBarcodeStickerView *_barcodeStickerView;
    struct CGSize _maximumBarcodeSize;
    PKPass *_pass;
    long long _barcodeStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long barcodeStyle; // @synthesize barcodeStyle=_barcodeStyle;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void)_computeMaxBarcodeSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

