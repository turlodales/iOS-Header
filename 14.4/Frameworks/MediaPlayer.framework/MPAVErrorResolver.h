//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MPAVErrorResolverDelegate;

@interface MPAVErrorResolver : NSObject
{
    id <MPAVErrorResolverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MPAVErrorResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2;
- (void)resolveError:(id)arg1;

@end

