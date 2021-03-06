//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface MCDNowPlayingObserver : NSObject
{
    NSHashTable *_observers;
    unsigned int _playbackState;
    NSString *_bundleIdentifier;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_notifyObservers;
- (unsigned int)queryPlaybackState;
- (void)playbackStateChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

