//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCHeadlineExperimentalTitleMetadata : NSObject
{
    _Bool _isTitleExperimental;
    int _treatmentState;
    long long _arrayIndexUsedforTitle;
    NSString *_chosenTitle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *chosenTitle; // @synthesize chosenTitle=_chosenTitle;
@property(readonly, nonatomic) int treatmentState; // @synthesize treatmentState=_treatmentState;
@property(readonly, nonatomic) long long arrayIndexUsedforTitle; // @synthesize arrayIndexUsedforTitle=_arrayIndexUsedforTitle;
@property(readonly, nonatomic) _Bool isTitleExperimental; // @synthesize isTitleExperimental=_isTitleExperimental;
- (id)initWithChosenTitle:(id)arg1 isTitleExperimental:(_Bool)arg2 arrayIndexUsedforTitle:(long long)arg3 treatmentState:(int)arg4;

@end

