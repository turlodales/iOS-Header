//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>

@class CPBarButton, NSString, NSUUID;
@protocol CPSButtonDelegate;

@interface CPSBarButtonItem : UIBarButtonItem <CPSButtonDelegate>
{
    NSUUID *_identifier;
    CPBarButton *_barButton;
    id <CPSButtonDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CPSButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CPBarButton *barButton; // @synthesize barButton=_barButton;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)didSelectButton:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithCPBarButton:(id)arg1;
- (id)_initWithCPBarButton:(id)arg1 showBackIndicator:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

