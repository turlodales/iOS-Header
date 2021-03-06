//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NFCopying-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCPurchaseAccessCheckable <NFCopying>
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, nonatomic, getter=isBundlePaid) _Bool bundlePaid;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

