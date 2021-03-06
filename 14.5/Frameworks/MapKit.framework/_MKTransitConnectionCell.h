//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class MKTransitInfoLabelView, NSLayoutConstraint, UIButton, _MKUILabel;
@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;

__attribute__((visibility("hidden")))
@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell
{
    _MKUILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIButton *_button;
    NSLayoutConstraint *_nameLabelToTopConstraint;
    NSLayoutConstraint *_transitInfoToNameConstraint;
    id <GEOTransitConnectionInfo> _connectionInfo;
    id <_MKTransitConnectionCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_MKTransitConnectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <GEOTransitConnectionInfo> connectionInfo; // @synthesize connectionInfo=_connectionInfo;
- (void)_buttonSelected;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

