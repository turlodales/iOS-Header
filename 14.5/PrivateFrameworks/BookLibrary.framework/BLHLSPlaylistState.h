//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLHLSKey, BLHLSMap, BLHLSStreamInf, NSMutableArray, NSMutableDictionary;

@interface BLHLSPlaylistState : NSObject
{
    NSMutableDictionary *_mutableGroups;
    BLHLSMap *_currentMap;
    double _currentDuration;
    NSMutableArray *_mutableSegments;
    BLHLSStreamInf *_currentStreamInf;
    NSMutableArray *_mutableStreamInfs;
    BLHLSKey *_currentKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BLHLSKey *currentKey; // @synthesize currentKey=_currentKey;
@property(retain, nonatomic) NSMutableArray *mutableStreamInfs; // @synthesize mutableStreamInfs=_mutableStreamInfs;
@property(retain, nonatomic) BLHLSStreamInf *currentStreamInf; // @synthesize currentStreamInf=_currentStreamInf;
@property(retain, nonatomic) NSMutableArray *mutableSegments; // @synthesize mutableSegments=_mutableSegments;
@property(nonatomic) double currentDuration; // @synthesize currentDuration=_currentDuration;
@property(retain, nonatomic) BLHLSMap *currentMap; // @synthesize currentMap=_currentMap;
@property(retain, nonatomic) NSMutableDictionary *mutableGroups; // @synthesize mutableGroups=_mutableGroups;
- (id)init;

@end

