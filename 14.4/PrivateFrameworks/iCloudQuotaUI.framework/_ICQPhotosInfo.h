//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _ICQPhotosInfo : NSObject
{
    unsigned long long _photoCount;
    unsigned long long _videoCount;
}

+ (void)getInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (id)mockCount:(id)arg1;
@property(nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long photoCount; // @synthesize photoCount=_photoCount;

@end

