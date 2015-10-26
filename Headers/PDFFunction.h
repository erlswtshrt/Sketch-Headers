#import "NSObject.h"

@class NSArray, NSData, NSDictionary;

@interface PDFFunction : NSObject
{
    NSData *_samples;
    NSDictionary *_parameters;
    unsigned long long _numberOfInputComponents;
    unsigned long long _numberOfOutputComponents;
    unsigned long long _bitsPerSample;
    unsigned long long _bytesPerSampleComponent;
    unsigned long long _bytesPerSample;
    unsigned long long _numberOfSamples;
    NSArray *_range;
    NSArray *_domain;
}

+ (id)functionWithInfo:(id)arg1;
@property(retain, nonatomic) NSArray *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSArray *range; // @synthesize range=_range;
@property(nonatomic) unsigned long long numberOfSamples; // @synthesize numberOfSamples=_numberOfSamples;
@property(nonatomic) unsigned long long bytesPerSample; // @synthesize bytesPerSample=_bytesPerSample;
@property(nonatomic) unsigned long long bytesPerSampleComponent; // @synthesize bytesPerSampleComponent=_bytesPerSampleComponent;
@property(nonatomic) unsigned long long bitsPerSample; // @synthesize bitsPerSample=_bitsPerSample;
@property(nonatomic) unsigned long long numberOfOutputComponents; // @synthesize numberOfOutputComponents=_numberOfOutputComponents;
@property(nonatomic) unsigned long long numberOfInputComponents; // @synthesize numberOfInputComponents=_numberOfInputComponents;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSData *samples; // @synthesize samples=_samples;
- (void).cxx_destruct;
- (void)mapInputs:(double [16])arg1 toOutputs:(double [16])arg2;
- (void)setupStitchedWithDictionary:(id)arg1;
- (double)valueForX:(double)arg1 c0:(double)arg2 c1:(double)arg3 n:(double)arg4;
- (void)setupExponentialWithDictionary:(id)arg1;
- (void)extractParameters:(id)arg1;
- (void)setupSampledWithDictionary:(id)arg1;
- (void)setupWithDictionary:(id)arg1;
- (void)setupWithStream:(id)arg1;
- (id)initWithInfo:(id)arg1;

@end

