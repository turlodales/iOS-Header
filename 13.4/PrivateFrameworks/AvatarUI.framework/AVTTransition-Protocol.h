//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTTransitionModel;

@protocol AVTTransition <NSObject>
@property(copy, nonatomic) CDUnknownBlockType completionHandler;
@property(copy, nonatomic) CDUnknownBlockType setupHandler;
@property(readonly, nonatomic) id <AVTTransitionModel> model;
@property(nonatomic) _Bool animated;
@property(nonatomic) long long state;
- (void)cancel;
- (void)start;
@end

