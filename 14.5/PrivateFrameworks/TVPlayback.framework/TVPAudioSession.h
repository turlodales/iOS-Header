//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVPAudioSession : NSObject
{
    CDUnknownBlockType _configurationBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
- (void)_updateIfNecessary;
- (void)_mediaServicesReset:(id)arg1;
- (void)dealloc;
- (id)init;

@end

