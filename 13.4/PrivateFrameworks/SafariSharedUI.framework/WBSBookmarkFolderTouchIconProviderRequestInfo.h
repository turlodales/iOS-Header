//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSSet;

@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject
{
    NSMutableArray *_thumbnailImages;
    NSMutableArray *_backgroundColors;
    _Bool _hasScheduledCoalescedUpdate;
    NSSet *_subrequestTokens;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasScheduledCoalescedUpdate; // @synthesize hasScheduledCoalescedUpdate=_hasScheduledCoalescedUpdate;
@property(copy, nonatomic) NSSet *subrequestTokens; // @synthesize subrequestTokens=_subrequestTokens;
@property(readonly, copy, nonatomic) NSArray *backgroundColors;
@property(readonly, copy, nonatomic) NSArray *thumbnailImages;
- (void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)init;

@end

