//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICJSSignConfiguration;

@interface ICJSSign : NSObject
{
    ICJSSignConfiguration *_configuration;
}

- (void).cxx_destruct;
- (id)signatureStringWithURLRequest:(id)arg1;
- (id)signatureDataWithURLRequest:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

