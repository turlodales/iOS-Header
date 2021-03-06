//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface USUsageReporter : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (void)synchronizeUsageWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)getLocalDeviceIdentifierAndReturnError:(id *)arg1;
- (void).cxx_destruct;
@property(readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getLocalDeviceIdentifierAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

