//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class NSString;

@protocol CLSSignalModel <NSObject>
+ (unsigned long long)latestVersion;
+ (unsigned long long)currentAnalyzerVersion;
+ (NSString *)name;
+ (id)modelWithVersion:(unsigned long long)arg1;
@property(readonly) unsigned long long minimumSupportedVersion;
@property(readonly) unsigned long long version;
@end

