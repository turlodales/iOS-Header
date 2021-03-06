//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCUIPayloadUserInputField, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MCUIFieldCollection : NSObject
{
    NSMutableArray *_payloadFieldArrays;
    long long _currentPayloadIndex;
    long long _currentFieldIndex;
    MCUIPayloadUserInputField *_currentField;
    _Bool _isFinalField;
}

- (void).cxx_destruct;
- (long long)currentPayloadIndex;
- (id)responseDictionariesForCurrentPayload;
- (_Bool)currentFieldIsSinglePasswordField;
- (_Bool)currentFieldIsFinalField;
- (_Bool)currentFieldIsLastInPayload;
- (void)restartCurrentPayload;
- (void)moveToNextField;
- (void)_setCurrentFieldToCurrentIndices;
- (void)_setIsFinalField;
- (id)currentField;
- (id)userInputResponses;
- (id)initWithUserInput:(id)arg1;

@end

