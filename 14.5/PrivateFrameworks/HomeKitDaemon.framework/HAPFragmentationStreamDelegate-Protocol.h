//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPFragmentationStream, NSData, NSError;

@protocol HAPFragmentationStreamDelegate <NSObject>
- (void)fragmentationStream:(HAPFragmentationStream *)arg1 didReceiveData:(NSData *)arg2 transactionIdentifier:(unsigned short)arg3 error:(NSError *)arg4;
- (void)fragmentationStream:(HAPFragmentationStream *)arg1 didCloseWithError:(NSError *)arg2;
@end

