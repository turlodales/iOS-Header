//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MLAppleImageFeatureExtractorObjectPrintParameters : NSObject
{
    unsigned long long _objectPrintVersion;
    NSArray *_expectedShapes;
    NSArray *_expectedKeys;
}

- (void).cxx_destruct;
@property(readonly) NSArray *expectedKeys; // @synthesize expectedKeys=_expectedKeys;
@property(readonly) NSArray *expectedShapes; // @synthesize expectedShapes=_expectedShapes;
@property(readonly) unsigned long long objectPrintVersion; // @synthesize objectPrintVersion=_objectPrintVersion;
- (id)initObjectPrintParameters:(unsigned long long)arg1 expectedShapes:(id)arg2 expectedKeys:(id)arg3 error:(id *)arg4;

@end

