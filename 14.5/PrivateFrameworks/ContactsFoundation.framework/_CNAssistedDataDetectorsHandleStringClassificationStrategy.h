//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/_CNHandleStringClassificationStrategy-Protocol.h>

@class NSString;
@protocol _CNHandleStringClassificationStrategy;

@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>
{
    id <_CNHandleStringClassificationStrategy> _strategy;
    id <_CNHandleStringClassificationStrategy> _assistingStrategy;
}

- (void).cxx_destruct;
- (void)makeAssistingStrategyIfNecessary;
- (unsigned long long)classificationOfHandleString:(id)arg1;
- (id)initWithStrategy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

