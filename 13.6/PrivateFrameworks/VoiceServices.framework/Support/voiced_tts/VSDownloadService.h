//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VSDownloadService : NSObject
{
    unsigned long long _type;
}

+ (id)inProgressDownloadVoiceKeys;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)cancelDownloadForAssets:(id)arg1;
- (void)updateVoiceResourcesIfNeeded:(id)arg1;
- (void)updateVoiceIfNeeded:(id)arg1;
- (void)updateVoicesAndVoiceResources;
- (id)initWithType:(unsigned long long)arg1;

@end

