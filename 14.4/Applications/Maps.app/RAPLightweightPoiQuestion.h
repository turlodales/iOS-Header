//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPQuestion.h"

__attribute__((visibility("hidden")))
@interface RAPLightweightPoiQuestion : RAPQuestion
{
    unsigned long long _submissionType;
}

- (void)_fillSubmissionParameters:(id)arg1;
- (_Bool)isComplete;
- (_Bool)_isRecursivelyComplete;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 submissionType:(unsigned long long)arg3;

@end

