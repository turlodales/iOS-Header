//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSString, PKPaymentPassAction;

@protocol NPKPassItemField <NSObject>
@property(readonly, nonatomic) _Bool hasPendingUpdate;
@property(readonly, nonatomic) PKPaymentPassAction *action;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *formattedValue;
@property(readonly, nonatomic) NSString *detailLabel;
@property(readonly, nonatomic) NSString *label;
@end

