//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SASProximitySessionTransport : NSObject
{
    CDUnknownBlockType _receivedDataBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType receivedDataBlock; // @synthesize receivedDataBlock=_receivedDataBlock;
- (void)sendData:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)activate;

@end

