//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MLInternalNLPModelWriter : NSObject
{
}

+ (_Bool)saveCustomSentenceClassifierModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;
+ (_Bool)saveCustomSentenceModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;
+ (_Bool)saveCustomWordTaggingModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;
+ (_Bool)saveCustomSequenceModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;

@end

