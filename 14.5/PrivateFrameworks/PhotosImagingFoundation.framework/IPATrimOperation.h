//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPATrimOperation : IPAVideoOperation
{
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
- (_Bool)isEqualToOperation:(id)arg1;
- (id)debugDescription;
- (id)identifier;
- (id)settingsDictionary;
- (id)trimRangeDictionary;
@property(readonly, nonatomic) CDStruct_e83c9415 trimRange;
- (id)initWithSettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithStartTime:(CDStruct_1b6d18a9)arg1 endTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithTrimRange:(CDStruct_e83c9415)arg1;

@end

