//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject
{
    NSMutableArray *_posterFrameViewQueue;
}

+ (void)purgeCache;
+ (void)enqueuePosterFrameView:(id)arg1;
+ (id)dequeuePosterFrameView;
+ (id)sharedCache;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *posterFrameViewQueue; // @synthesize posterFrameViewQueue=_posterFrameViewQueue;
- (id)init;

@end

