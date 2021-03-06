//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface AXTapticChimeAsset : NSObject
{
    float _volume;
    NSString *_audioFilePath;
    double _prePlayTimeInterval;
    NSDictionary *_hapticDictionary;
}

+ (id)quarterHourAssetForType:(long long)arg1;
+ (id)hourAssetForType:(long long)arg1 hour:(unsigned long long)arg2;
+ (id)_assetPathForChimeSoundType:(long long)arg1 fileName:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *hapticDictionary; // @synthesize hapticDictionary=_hapticDictionary;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) double prePlayTimeInterval; // @synthesize prePlayTimeInterval=_prePlayTimeInterval;
@property(readonly, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
- (id)description;
- (unsigned int)createSystemSoundIDForStartTime:(double)arg1;
@property(readonly, nonatomic) NSArray *hapticAtomEntries;
- (id)_initWithChimeSoundType:(long long)arg1 audioFilePath:(id)arg2 hapticsFilePath:(id)arg3;

@end

