{ Parsed from AVFoundation.framework AVAudioMixerNode.h }


{$ifdef TYPES}
type
  AVAudioMixerNodePtr = ^AVAudioMixerNode;
{$endif}

{$ifdef CLASSES}

type
  AVAudioMixerNode = objcclass external (AVAudioNode, AVAudioMixingProtocol)
  public
    procedure setOutputVolume(newValue: single); message 'setOutputVolume:';
    function outputVolume: single; message 'outputVolume';
    function nextAvailableInputBus: AVAudioNodeBus; message 'nextAvailableInputBus';

    { Adopted protocols }
    procedure setObstruction(newValue: single); message 'setObstruction:';
    function obstruction: single; message 'obstruction';
    procedure setOcclusion(newValue: single); message 'setOcclusion:';
    function occlusion: single; message 'occlusion';
    procedure setPan(newValue: single); message 'setPan:';
    function pan: single; message 'pan';
    procedure setPosition(newValue: AVAudio3DPoint); message 'setPosition:';
    function position: AVAudio3DPoint; message 'position';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setRenderingAlgorithm(newValue: AVAudio3DMixingRenderingAlgorithm); message 'setRenderingAlgorithm:';
    function renderingAlgorithm: AVAudio3DMixingRenderingAlgorithm; message 'renderingAlgorithm';
    procedure setReverbBlend(newValue: single); message 'setReverbBlend:';
    function reverbBlend: single; message 'reverbBlend';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
  end;
{$endif}

