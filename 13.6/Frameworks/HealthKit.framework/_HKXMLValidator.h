//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKXMLValidator : NSObject
{
    struct _xmlSchema *_xsdSchema;
}

+ (id)validatorWithPathToXSD:(id)arg1;
+ (id)validatorWithXSD:(id)arg1;
- (_Bool)validateXML:(id)arg1 simpleError:(id *)arg2 detailedErrors:(id *)arg3;
- (void)dealloc;
- (id)_initWithSchema:(struct _xmlSchema *)arg1;

@end

