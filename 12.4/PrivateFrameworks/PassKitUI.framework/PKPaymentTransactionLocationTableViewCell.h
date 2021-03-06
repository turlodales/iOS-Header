//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentTransaction, PKTransactionMapView, UIImageView, UILabel;

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell
{
    UILabel *_titleLabel;
    PKTransactionMapView *_mapView;
    UIImageView *_disclosureView;
    _Bool _shouldRoundCorners;
    PKPaymentTransaction *_transaction;
}

@property(nonatomic) _Bool shouldRoundCorners; // @synthesize shouldRoundCorners=_shouldRoundCorners;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)_disclosureView;
- (_Bool)_shouldShowDisclosureIndicator;
@property(nonatomic) _Bool usesDarkMapAppearance;
- (void)setTitleLabelColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

